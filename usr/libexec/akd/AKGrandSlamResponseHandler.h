//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject
{
    AKAppleIDAuthenticationContext *_context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000acdc
@property(retain, nonatomic) AKAppleIDAuthenticationContext *context; // @synthesize context=_context;
- (void)_revokeDeviceTrust;	// IMP=0x001000000000abdf
- (void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1;	// IMP=0x001000000000abb9
- (void)handleResponseError:(id)arg1;	// IMP=0x001000000000aa65
- (id)initWithContext:(id)arg1;	// IMP=0x001000000000aa0b

@end
