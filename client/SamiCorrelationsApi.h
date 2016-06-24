#ifndef SamiCorrelationsApi_H_
#define SamiCorrelationsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiCorrelation.h"
using Tizen::Base::Integer;
#include "SamiPostCorrelation.h"
#include "SamiJsonErrorResponse.h"
#include "SamiCommonResponse.h"
#include "SamiVoteDelete.h"
#include "SamiPostVote.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCorrelationsApi {
public:
  SamiCorrelationsApi();
  virtual ~SamiCorrelationsApi();

  IList* 
  v1AggregatedCorrelationsGetWithCompletion(String* accessToken, String* effect, String* cause, String* correlationCoefficient, String* onsetDelay, String* durationOfAction, String* lastUpdated, Integer* limit, Integer* offset, Integer* sort, void (* handler)(IList*, SamiError*));
  void 
  v1AggregatedCorrelationsPostWithCompletion(SamiPostCorrelation* body, String* accessToken, void(* handler)(SamiError*));
  IList* 
  v1CorrelationsGetWithCompletion(String* accessToken, String* effect, String* cause, String* correlationCoefficient, String* onsetDelay, String* durationOfAction, String* lastUpdated, Integer* limit, Integer* offset, Integer* sort, void (* handler)(IList*, SamiError*));
  IList* 
  v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetWithCompletion(Integer* organizationId, Integer* userId, String* variableName, String* organizationToken, String* accessToken, String* includePublic, void (* handler)(IList*, SamiError*));
  IList* 
  v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetWithCompletion(Integer* organizationId, Integer* userId, String* variableName, String* organizationToken, String* accessToken, String* includePublic, void (* handler)(IList*, SamiError*));
  IList* 
  v1PublicCorrelationsSearchSearchGetWithCompletion(String* search, String* effectOrCause, String* accessToken, void (* handler)(IList*, SamiError*));
  IList* 
  v1VariablesVariableNameCausesGetWithCompletion(String* variableName, void (* handler)(IList*, SamiError*));
  IList* 
  v1VariablesVariableNameEffectsGetWithCompletion(String* variableName, String* accessToken, void (* handler)(IList*, SamiError*));
  IList* 
  v1VariablesVariableNamePublicCausesGetWithCompletion(String* variableName, String* accessToken, void (* handler)(IList*, SamiError*));
  IList* 
  v1VariablesVariableNamePublicEffectsGetWithCompletion(String* variableName, String* accessToken, void (* handler)(IList*, SamiError*));
  SamiCommonResponse* 
  v1VotesDeletePostWithCompletion(SamiVoteDelete* body, String* accessToken, void (* handler)(SamiCommonResponse*, SamiError*));
  SamiCommonResponse* 
  v1VotesPostWithCompletion(SamiPostVote* body, String* accessToken, void (* handler)(SamiCommonResponse*, SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCorrelationsApi_H_ */
