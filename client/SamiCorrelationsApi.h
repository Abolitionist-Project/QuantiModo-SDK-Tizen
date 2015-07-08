#ifndef SamiCorrelationsApi_H_
#define SamiCorrelationsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCorrelation.h"
using Tizen::Base::String;
#include "SamiJsonErrorResponse.h"
#include "SamiPostCorrelation.h"
using Tizen::Base::Integer;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCorrelationsApi {
public:
  SamiCorrelationsApi();
  virtual ~SamiCorrelationsApi();

  
  IList* 
  correlationsGetWithCompletion(String* effect, String* cause, void (* handler)(IList*, SamiError*));
  
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
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCorrelationsApi_H_ */
