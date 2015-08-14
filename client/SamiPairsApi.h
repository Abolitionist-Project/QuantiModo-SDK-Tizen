#ifndef SamiPairsApi_H_
#define SamiPairsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPairs.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPairsApi {
public:
  SamiPairsApi();
  virtual ~SamiPairsApi();

  
  IList* 
  pairsGetWithCompletion(String* cause, String* effect, String* causeSource, String* causeUnit, String* delay, String* duration, String* effectSource, String* effectUnit, String* endTime, String* startTime, Integer* limit, Integer* offset, Integer* sort, void (* handler)(IList*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPairsApi_H_ */
