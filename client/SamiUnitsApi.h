#ifndef SamiUnitsApi_H_
#define SamiUnitsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiUnitCategory.h"
using Tizen::Base::String;
#include "SamiUnit.h"
using Tizen::Base::Integer;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUnitsApi {
public:
  SamiUnitsApi();
  virtual ~SamiUnitsApi();

  SamiUnitCategory* 
  v1UnitCategoriesGetWithCompletion( void (* handler)(SamiUnitCategory*, SamiError*));
  IList* 
  v1UnitsGetWithCompletion(String* accessToken, Integer* _id, String* unitName, String* abbreviatedUnitName, String* categoryName, void (* handler)(IList*, SamiError*));
  IList* 
  v1UnitsVariableGetWithCompletion(String* accessToken, String* unitName, String* abbreviatedUnitName, String* categoryName, String* variable, void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUnitsApi_H_ */
