//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISApplicationInitializationContext;

__attribute__((visibility("hidden")))
@interface _UIApplicationConfigurationLoader : NSObject
{
    UISApplicationInitializationContext *_applicationInitializationContext;	// 8 = 0x8
    _Atomic _Bool _hasRequestedPreload;	// 16 = 0x10
}

+ (id)sharedLoader;	// IMP=0x00400000007f09fa
- (void).cxx_destruct;	// IMP=0x00000000007f1063
@property(readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;
- (void)startPreloadInitializationContext;	// IMP=0x00000000007f0edc
- (id)_loadInitializationContext;	// IMP=0x00000000007f0c97
- (id)_appInitializationContextFactoryClass;	// IMP=0x00000000007f0bd6
@property(readonly, nonatomic) _Bool usesLocalInitializationContext;
@property(readonly, nonatomic) _Bool isFrontBoard;
- (void)dealloc;	// IMP=0x00000000007f0ab0
- (id)_init;	// IMP=0x00000000007f0a81

@end

