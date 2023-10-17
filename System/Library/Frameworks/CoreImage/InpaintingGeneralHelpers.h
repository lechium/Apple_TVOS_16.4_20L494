//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface InpaintingGeneralHelpers : NSObject
{
}

+ (id)stringFromCGRect:(struct CGRect)arg1;	// IMP=0x0080000000029660
+ (id)URLForResource:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x008000000002959b
+ (id)pathForResourceWithFilename:(id)arg1 error:(id *)arg2;	// IMP=0x008000000002953a
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000029475
+ (_Bool)fillError:(id *)arg1 withErrorWithCode:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;	// IMP=0x008000000002943e
+ (_Bool)fillError:(id *)arg1 withGeneralErrorWithMessage:(id)arg2;	// IMP=0x008000000002940d
+ (id)generalErrorWithMessage:(id)arg1;	// IMP=0x00800000000293e7
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0080000000029375
+ (id)getMainBundleUsingError:(id *)arg1;	// IMP=0x00800000000292e0

@end

