/*
 * SamiMeasurement.h
 * 
 * 
 */

#ifndef SamiMeasurement_H_
#define SamiMeasurement_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::DateTime;
using Tizen::Base::Float;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiMeasurement: public SamiObject {
public:
    SamiMeasurement();
    SamiMeasurement(String* json);
    virtual ~SamiMeasurement();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurement* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    
    String* getPClientId();
    void setPClientId(String* pClient_id);
    
    Integer* getPConnectorId();
    void setPConnectorId(Integer* pConnector_id);
    
    Integer* getPVariableId();
    void setPVariableId(Integer* pVariable_id);
    
    Integer* getPSourceId();
    void setPSourceId(Integer* pSource_id);
    
    String* getPStartTime();
    void setPStartTime(String* pStart_time);
    
    Float* getPValue();
    void setPValue(Float* pValue);
    
    Integer* getPUnitId();
    void setPUnitId(Integer* pUnit_id);
    
    Float* getPOriginalValue();
    void setPOriginalValue(Float* pOriginal_value);
    
    Integer* getPOriginalUnitId();
    void setPOriginalUnitId(Integer* pOriginal_unit_id);
    
    Integer* getPDuration();
    void setPDuration(Integer* pDuration);
    
    String* getPNote();
    void setPNote(String* pNote);
    
    Float* getPLatitude();
    void setPLatitude(Float* pLatitude);
    
    Float* getPLongitude();
    void setPLongitude(Float* pLongitude);
    
    String* getPLocation();
    void setPLocation(String* pLocation);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    
    String* getPError();
    void setPError(String* pError);
    

private:
    Integer* pId;
    Integer* pUser_id;
    String* pClient_id;
    Integer* pConnector_id;
    Integer* pVariable_id;
    Integer* pSource_id;
    String* pStart_time;
    Float* pValue;
    Integer* pUnit_id;
    Float* pOriginal_value;
    Integer* pOriginal_unit_id;
    Integer* pDuration;
    String* pNote;
    Float* pLatitude;
    Float* pLongitude;
    String* pLocation;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    String* pError;
    
};

} /* namespace Swagger */

#endif /* SamiMeasurement_H_ */
