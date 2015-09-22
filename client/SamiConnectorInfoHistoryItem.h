/*
 * SamiConnectorInfoHistoryItem.h
 * 
 * 
 */

#ifndef SamiConnectorInfoHistoryItem_H_
#define SamiConnectorInfoHistoryItem_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiConnectorInfoHistoryItem: public SamiObject {
public:
    SamiConnectorInfoHistoryItem();
    SamiConnectorInfoHistoryItem(String* json);
    virtual ~SamiConnectorInfoHistoryItem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConnectorInfoHistoryItem* fromJson(String* obj);

    
    Integer* getPNumberOfMeasurements();
    void setPNumberOfMeasurements(Integer* pNumber_of_measurements);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    
    String* getPMessage();
    void setPMessage(String* pMessage);
    
    String* getPCreatedAt();
    void setPCreatedAt(String* pCreated_at);
    

private:
    Integer* pNumber_of_measurements;
    Boolean* pSuccess;
    String* pMessage;
    String* pCreated_at;
    
};

} /* namespace Swagger */

#endif /* SamiConnectorInfoHistoryItem_H_ */
