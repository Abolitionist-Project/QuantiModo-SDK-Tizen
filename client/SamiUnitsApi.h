#ifndef SamiUnitsApi_H_
#define SamiUnitsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiUnitCategory.h"
#include "SamiUnit.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUnitsApi {
public:
  SamiUnitsApi();
  virtual ~SamiUnitsApi();

  
  SamiUnitCategory* 
  unitCategoriesGetWithCompletion( void (* handler)(SamiUnitCategory*, SamiError*));
  
  IList* 
  unitsGetWithCompletion(String* unitName, String* abbreviatedUnitName, String* categoryName, void (* handler)(IList*, SamiError*));
  
  IList* 
  unitsVariableGetWithCompletion(String* unitName, String* abbreviatedUnitName, String* categoryName, String* variable, void (* handler)(IList*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUnitsApi_H_ */
