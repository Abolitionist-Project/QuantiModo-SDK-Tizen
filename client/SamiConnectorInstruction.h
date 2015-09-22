/*
 * SamiConnectorInstruction.h
 * 
 * 
 */

#ifndef SamiConnectorInstruction_H_
#define SamiConnectorInstruction_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiConnectorInstruction: public SamiObject {
public:
    SamiConnectorInstruction();
    SamiConnectorInstruction(String* json);
    virtual ~SamiConnectorInstruction();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConnectorInstruction* fromJson(String* obj);

    
    String* getPUrl();
    void setPUrl(String* pUrl);
    
    IList* getPParameters();
    void setPParameters(IList* pParameters);
    
    Boolean* getPUsePopup();
    void setPUsePopup(Boolean* pUsePopup);
    

private:
    String* pUrl;
    IList* pParameters;
    Boolean* pUsePopup;
    
};

} /* namespace Swagger */

#endif /* SamiConnectorInstruction_H_ */
