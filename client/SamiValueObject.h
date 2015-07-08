/*
 * SamiValueObject.h
 * 
 * 
 */

#ifndef SamiValueObject_H_
#define SamiValueObject_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;
using Tizen::Base::Double;


namespace Swagger {

class SamiValueObject: public SamiObject {
public:
    SamiValueObject();
    SamiValueObject(String* json);
    virtual ~SamiValueObject();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiValueObject* fromJson(String* obj);

    
    Long* getPTimestamp();
    void setPTimestamp(Long* pTimestamp);
    
    Double* getPValue();
    void setPValue(Double* pValue);
    
    String* getPNote();
    void setPNote(String* pNote);
    

private:
    Long* pTimestamp;
    Double* pValue;
    String* pNote;
    
};

} /* namespace Swagger */

#endif /* SamiValueObject_H_ */
