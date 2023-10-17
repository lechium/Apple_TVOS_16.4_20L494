//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SignatureAlignmentTracker : NSObject
{
}

+ (_Bool)FillUnknownError:(id *)arg1;	// IMP=0x0080000000038920
+ (_Bool)ConvertException:(const struct exception *)arg1 toError:(id *)arg2;	// IMP=0x008000000003883a
+ (_Bool)ConvertSystemError:(const struct system_error *)arg1 toError:(id *)arg2;	// IMP=0x008000000003874d
+ (id)signatureAlignmentFromTrackingResult:(struct TrackingResult)arg1;	// IMP=0x008000000003869b
+ (id)compareQuerySignature:(id)arg1 withReferenceSignature:(id)arg2 mergeMode:(long long)arg3 error:(id *)arg4;	// IMP=0x00800000000382f0

@end
