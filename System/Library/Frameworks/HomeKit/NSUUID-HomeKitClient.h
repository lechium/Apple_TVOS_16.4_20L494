//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (HomeKitClient)
+ (_Bool)hm_setAssistantIdentifierSalt:(id)arg1;	// IMP=0x006000000029e269
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1;	// IMP=0x006000000029e24e
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x006000000029e192
+ (void)hm_setIdentifierSalt:(id)arg1;	// IMP=0x006000000029e13a
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1;	// IMP=0x006000000029e11f
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x006000000029e065
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;	// IMP=0x006000000029e049
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x006000000029e030
+ (id)hm_uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x006000000029dd58
- (id)hm_convertToData;	// IMP=0x001000000029c7e8
@end

