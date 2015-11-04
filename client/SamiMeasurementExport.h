/*
 * SamiMeasurementExport.h
 * 
 * 
 */

#ifndef SamiMeasurementExport_H_
#define SamiMeasurementExport_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::DateTime;
using Tizen::Base::String;
using Tizen::Base::Integer;


namespace Swagger {

class SamiMeasurementExport: public SamiObject {
public:
    SamiMeasurementExport();
    SamiMeasurementExport(String* json);
    virtual ~SamiMeasurementExport();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurementExport* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    
    String* getPStatus();
    void setPStatus(String* pStatus);
    
    String* getPErrorMessage();
    void setPErrorMessage(String* pError_message);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    

private:
    Integer* pId;
    Integer* pUser_id;
    String* pStatus;
    String* pError_message;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    
};

} /* namespace Swagger */

#endif /* SamiMeasurementExport_H_ */
