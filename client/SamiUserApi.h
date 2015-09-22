#ifndef SamiUserApi_H_
#define SamiUserApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiUserTokenSuccessfulResponse.h"
#include "SamiUserTokenFailedResponse.h"
#include "SamiUserTokenRequest.h"
#include "SamiUser.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUserApi {
public:
  SamiUserApi();
  virtual ~SamiUserApi();

  
  SamiUserTokenSuccessfulResponse* 
  v1OrganizationsOrganizationIdUsersPostWithCompletion(Integer* organizationId, SamiUserTokenRequest* body, void (* handler)(SamiUserTokenSuccessfulResponse*, SamiError*));
  
  SamiUser* 
  v1UserMeGetWithCompletion( void (* handler)(SamiUser*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUserApi_H_ */
