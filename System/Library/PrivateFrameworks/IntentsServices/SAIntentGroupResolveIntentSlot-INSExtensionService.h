//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupResolveIntentSlot.h>

@interface SAIntentGroupResolveIntentSlot (INSExtensionService)
- (_Bool)ins_shouldUseExtendedFlowTimeout;	// IMP=0x0090000000006456
- (long long)ins_analyticsEndEventType;	// IMP=0x009000000000644b
- (long long)ins_analyticsBeginEventType;	// IMP=0x0090000000006440
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00900000000060df
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x00900000000060cd
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x00900000000060bb
- (id)ins_protobufEncodedIntent;	// IMP=0x00900000000060a9
- (id)ins_jsonEncodedIntent;	// IMP=0x0090000000006097
@end

