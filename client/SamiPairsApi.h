#ifndef SamiPairsApi_H_
#define SamiPairsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiPairs.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPairsApi {
public:
  SamiPairsApi();
  virtual ~SamiPairsApi();

  
  IList* 
  pairsGetWithCompletion(String* cause, String* causeSource, String* causeUnit, String* delay, String* duration, String* effect, String* effectSource, String* effectUnit, String* endTime, String* startTime, void (* handler)(IList*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPairsApi_H_ */
