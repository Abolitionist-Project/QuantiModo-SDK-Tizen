#ifndef SamiAdministrationApi_H_
#define SamiAdministrationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAdministrationApi {
public:
  SamiAdministrationApi();
  virtual ~SamiAdministrationApi();

  
  void 
  administrationCacheClearGetWithCompletion( void(* handler)(SamiError*));
  
  void 
  administrationCorrelationsUpdateGetWithCompletion(String* modifiedVariable, Integer* userId, void(* handler)(SamiError*));
  
  void 
  administrationCorrelationsUpdateAllUsersGetWithCompletion( void(* handler)(SamiError*));
  
  void 
  administrationCorrelationsUpdateAllVariablesGetWithCompletion(Integer* userId, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAdministrationApi_H_ */
