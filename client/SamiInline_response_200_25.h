/*
 * SamiInline_response_200_25.h
 * 
 * 
 */

#ifndef SamiInline_response_200_25_H_
#define SamiInline_response_200_25_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiUnitCategory.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_25: public SamiObject {
public:
    SamiInline_response_200_25();
    SamiInline_response_200_25(String* json);
    virtual ~SamiInline_response_200_25();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_25* fromJson(String* obj);

    
    SamiUnitCategory* getPData();
    void setPData(SamiUnitCategory* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiUnitCategory* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_25_H_ */
