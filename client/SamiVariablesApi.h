#ifndef SamiVariablesApi_H_
#define SamiVariablesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiVariable.h"
using Tizen::Base::Integer;
using Tizen::Base::String;
#include "SamiUserVariables.h"
#include "SamiVariableCategory.h"
#include "SamiVariablesNew.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiVariablesApi {
public:
  SamiVariablesApi();
  virtual ~SamiVariablesApi();

  
  SamiVariable* 
  v1PublicVariablesGetWithCompletion( void (* handler)(SamiVariable*, SamiError*));
  
  SamiVariable* 
  v1PublicVariablesSearchSearchGetWithCompletion(String* search, Integer* limit, Integer* offset, Integer* sort, void (* handler)(SamiVariable*, SamiError*));
  
  void 
  v1UserVariablesPostWithCompletion(SamiUserVariables* sharingData, void(* handler)(SamiError*));
  
  IList* 
  v1VariableCategoriesGetWithCompletion( void (* handler)(IList*, SamiError*));
  
  SamiVariable* 
  v1VariablesGetWithCompletion(Integer* userId, String* category, String* name, String* lastUpdated, String* source, String* latestMeasurementTime, String* numberOfMeasurements, String* lastSource, Integer* limit, Integer* offset, Integer* sort, void (* handler)(SamiVariable*, SamiError*));
  
  void 
  v1VariablesPostWithCompletion(SamiVariablesNew* variableName, void(* handler)(SamiError*));
  
  IList* 
  v1VariablesSearchSearchGetWithCompletion(String* search, String* categoryName, String* source, Integer* limit, Integer* offset, void (* handler)(IList*, SamiError*));
  
  SamiVariable* 
  v1VariablesVariableNameGetWithCompletion(String* variableName, void (* handler)(SamiVariable*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiVariablesApi_H_ */
