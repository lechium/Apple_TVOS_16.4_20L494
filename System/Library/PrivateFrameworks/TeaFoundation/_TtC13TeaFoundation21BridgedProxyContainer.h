//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol TFCallbackRegistration, TFRegistrationContainer;

__attribute__((visibility("hidden")))
@interface _TtC13TeaFoundation21BridgedProxyContainer : NSObject
{
    MISSING_TYPE *publicContainer;	// 8 = 0x8
    MISSING_TYPE *privateContainer;	// 16 = 0x10
    MISSING_TYPE *callback;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004a2d0
- (id)init;	// IMP=0x000000000004a270
@property(nonatomic, retain) id <TFCallbackRegistration> callback; // @synthesize callback;
@property(nonatomic, retain) id <TFRegistrationContainer> privateContainer; // @synthesize privateContainer;
@property(nonatomic, retain) id <TFRegistrationContainer> publicContainer; // @synthesize publicContainer;

@end

