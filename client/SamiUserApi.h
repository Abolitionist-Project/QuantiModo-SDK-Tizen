#ifndef SamiUserApi_H_
#define SamiUserApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiUser.h"
using Tizen::Base::Integer;
#include "SamiUserTokenSuccessfulResponse.h"
#include "SamiUserTokenFailedResponse.h"
#include "SamiUserTokenRequest.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUserApi {
public:
  SamiUserApi();
  virtual ~SamiUserApi();

  
  void 
  userMeGetWithCompletion( void(* handler)(SamiError*));
  
  SamiUserTokenSuccessfulResponse* 
  v1OrganizationsOrganizationIdUsersPostWithCompletion(Integer* organizationId, SamiUserTokenRequest* body, void (* handler)(SamiUserTokenSuccessfulResponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUserApi_H_ */
