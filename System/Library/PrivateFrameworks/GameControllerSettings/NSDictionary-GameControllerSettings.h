//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSString;
@protocol GCSJSONObject;

@interface NSDictionary (GameControllerSettings)
+ (id)_gcs_serializableDictionaryForDictionaryJsonObject:(id)arg1;	// IMP=0x001000000000253f
+ (id)_gcs_serializableDictionaryForJsonObject:(id)arg1 withValuesOfClass:(Class)arg2;	// IMP=0x00100000000022dd
+ (id)_gcs_jsonObjectForSerializableDictionary:(id)arg1;	// IMP=0x0010000000002088
- (id)_gcs_gscProfileForJSONKey:(id)arg1;	// IMP=0x0010000000002877
- (id)_gcs_gscElementForJSONKey:(id)arg1;	// IMP=0x0010000000002801
- (id)_gcs_uuidForJSONKey:(id)arg1;	// IMP=0x001000000000278b
- (id)_gcs_dateForJSONKey:(id)arg1;	// IMP=0x0010000000002715
- (id)_gcs_arrayForJSONKey:(id)arg1;	// IMP=0x00100000000026b5
- (id)_gcs_dictionaryForJSONKey:(id)arg1;	// IMP=0x0010000000002655
- (id)_gcs_numberForJSONKey:(id)arg1;	// IMP=0x00100000000025f5
- (id)_gcs_stringForJSONKey:(id)arg1;	// IMP=0x0010000000002595
@property(readonly, nonatomic) id <GCSJSONObject> jsonObject;
- (id)initWithJSONObject:(id)arg1;	// IMP=0x0010000000001b68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
