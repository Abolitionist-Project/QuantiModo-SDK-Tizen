#ifndef SamiVariablesApi_H_
#define SamiVariablesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiVariable.h"
#include "SamiVariableCategory.h"
#include "SamiVariableUserSettings.h"
using Tizen::Base::Integer;
#include "SamiVariablesNew.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVariablesApi {
public:
  SamiVariablesApi();
  virtual ~SamiVariablesApi();

  
  void 
  correlationsPostWithCompletion(String* cause, String* effect, String* correlationcoefficient, String* vote, void(* handler)(SamiError*));
  
  SamiVariable* 
  publicVariablesGetWithCompletion( void (* handler)(SamiVariable*, SamiError*));
  
  SamiVariable* 
  publicVariablesSearchSearchGetWithCompletion(String* search, String* effectOrCause, void (* handler)(SamiVariable*, SamiError*));
  
  IList* 
  variableCategoriesGetWithCompletion( void (* handler)(IList*, SamiError*));
  
  void 
  variableUserSettingsPostWithCompletion(SamiVariableUserSettings* sharingData, void(* handler)(SamiError*));
  
  SamiVariable* 
  variablesGetWithCompletion(Integer* userId, String* categoryName, void (* handler)(SamiVariable*, SamiError*));
  
  void 
  variablesPostWithCompletion(SamiVariablesNew* variableName, void(* handler)(SamiError*));
  
  IList* 
  variablesSearchSearchGetWithCompletion(String* search, String* categoryName, String* source, Integer* limit, Integer* offset, void (* handler)(IList*, SamiError*));
  
  SamiVariable* 
  variablesVariableNameGetWithCompletion(String* variableName, void (* handler)(SamiVariable*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVariablesApi_H_ */
