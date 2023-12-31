//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVCSEndpoint, TVSettingsRemoteAppFacade;

@interface TVSettingsRemoteAppDevice : NSObject
{
    NSString *_displayName;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    TVCSEndpoint *_endpoint;	// 32 = 0x20
    TVSettingsRemoteAppFacade *_remoteFacade;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000008a37e
@property(nonatomic) __weak TVSettingsRemoteAppFacade *remoteFacade; // @synthesize remoteFacade=_remoteFacade;
@property(readonly, copy, nonatomic) TVCSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)pairWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a28d
- (void)unpairWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008a211
- (unsigned long long)hash;	// IMP=0x001000000008a1b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000089f87
- (id)initWithEndpoint:(id)arg1;	// IMP=0x0010000000089edc
- (id)initWithDeviceRef:(void *)arg1;	// IMP=0x0010000000089e51

@end

