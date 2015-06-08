#ifndef SamiVariablesApi_H_
#define SamiVariablesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiVariable.h"
#include "SamiVariableCategory.h"
#include "SamiVariableUserSettings.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVariablesApi {
public:
  SamiVariablesApi();
  virtual ~SamiVariablesApi();

  
  void 
  correlationsPostWithCompletion(String* cause, String* effect, String* correlationcoefficient, String* vote, void(* handler)(SamiError*));
  
  void 
  publicVariablesGetWithCompletion( void(* handler)(SamiError*));
  
  void 
  publicVariablesSearchSearchGetWithCompletion(String* search, String* effectOrCause, void(* handler)(SamiError*));
  
  void 
  variableCategoriesGetWithCompletion( void(* handler)(SamiError*));
  
  void 
  variableUserSettingsPostWithCompletion(IList* sharingData, void(* handler)(SamiError*));
  
  void 
  variablesGetWithCompletion(Integer* userId, String* categoryName, void(* handler)(SamiError*));
  
  void 
  variablesPostWithCompletion(IList* variableName, void(* handler)(SamiError*));
  
  void 
  variablesSearchSearchGetWithCompletion(String* search, String* categoryName, String* source, Integer* limit, Integer* offset, void(* handler)(SamiError*));
  
  void 
  variablesVariableNameGetWithCompletion(String* variableName, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVariablesApi_H_ */
