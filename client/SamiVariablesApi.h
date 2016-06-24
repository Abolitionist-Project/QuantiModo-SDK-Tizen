#ifndef SamiVariablesApi_H_
#define SamiVariablesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiVariable.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiUserVariables.h"
#include "SamiVariableCategory.h"
#include "SamiVariablesNew.h"
using Tizen::Base::Boolean;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVariablesApi {
public:
  SamiVariablesApi();
  virtual ~SamiVariablesApi();

  SamiVariable* 
  v1PublicVariablesGetWithCompletion( void (* handler)(SamiVariable*, SamiError*));
  SamiVariable* 
  v1PublicVariablesSearchSearchGetWithCompletion(String* search, String* accessToken, String* categoryName, String* source, String* effectOrCause, String* publicEffectOrCause, Integer* limit, Integer* offset, Integer* sort, void (* handler)(SamiVariable*, SamiError*));
  void 
  v1UserVariablesPostWithCompletion(SamiUserVariables* userVariables, void(* handler)(SamiError*));
  IList* 
  v1VariableCategoriesGetWithCompletion( void (* handler)(IList*, SamiError*));
  SamiVariable* 
  v1VariablesGetWithCompletion(String* accessToken, Integer* _id, Integer* userId, String* category, String* name, String* lastUpdated, String* source, String* latestMeasurementTime, String* numberOfMeasurements, String* lastSource, Integer* limit, Integer* offset, Integer* sort, void (* handler)(SamiVariable*, SamiError*));
  void 
  v1VariablesPostWithCompletion(SamiVariablesNew* body, String* accessToken, void(* handler)(SamiError*));
  IList* 
  v1VariablesSearchSearchGetWithCompletion(String* search, String* accessToken, String* categoryName, Boolean* includePublic, Boolean* manualTracking, String* source, String* effectOrCause, String* publicEffectOrCause, Integer* limit, Integer* offset, void (* handler)(IList*, SamiError*));
  SamiVariable* 
  v1VariablesVariableNameGetWithCompletion(String* variableName, String* accessToken, void (* handler)(SamiVariable*, SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVariablesApi_H_ */
