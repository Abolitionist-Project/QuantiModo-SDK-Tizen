#ifndef SamiCorrelationsApi_H_
#define SamiCorrelationsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiCorrelation.h"
using Tizen::Base::String;
#include "SamiJsonErrorResponse.h"
#include "SamiPostCorrelation.h"
#include "SamiCommonResponse.h"
using Tizen::Base::Boolean;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCorrelationsApi {
public:
  SamiCorrelationsApi();
  virtual ~SamiCorrelationsApi();

  
  IList* 
  correlationsGetWithCompletion(String* effect, String* cause, Integer* limit, Integer* offset, Integer* sort, void (* handler)(IList*, SamiError*));
  
  IList* 
  publicCorrelationsSearchSearchGetWithCompletion(String* search, String* effectOrCause, void (* handler)(IList*, SamiError*));
  
  void 
  v1CorrelationsPostWithCompletion(SamiPostCorrelation* body, void(* handler)(SamiError*));
  
  IList* 
  v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameCausesGetWithCompletion(Integer* organizationId, Integer* userId, String* variableName, String* organizationToken, String* includePublic, void (* handler)(IList*, SamiError*));
  
  IList* 
  v1OrganizationsOrganizationIdUsersUserIdVariablesVariableNameEffectsGetWithCompletion(Integer* organizationId, Integer* userId, String* variableName, String* organizationToken, String* includePublic, void (* handler)(IList*, SamiError*));
  
  IList* 
  v1VariablesVariableNameCausesGetWithCompletion(String* variableName, void (* handler)(IList*, SamiError*));
  
  IList* 
  v1VariablesVariableNameEffectsGetWithCompletion(String* variableName, void (* handler)(IList*, SamiError*));
  
  IList* 
  v1VariablesVariableNamePublicCausesGetWithCompletion(String* variableName, void (* handler)(IList*, SamiError*));
  
  IList* 
  v1VariablesVariableNamePublicEffectsGetWithCompletion(String* variableName, void (* handler)(IList*, SamiError*));
  
  SamiCommonResponse* 
  v1VotesPostWithCompletion(String* cause, String* effect, Boolean* vote, void (* handler)(SamiCommonResponse*, SamiError*));
  
  SamiCommonResponse* 
  v1VotesDeletePostWithCompletion(String* cause, String* effect, void (* handler)(SamiCommonResponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCorrelationsApi_H_ */
