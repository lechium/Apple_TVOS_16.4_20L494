//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface _EXConnectionHandlerScene : NSObject
{
    UIViewController *_viewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000009d88
@property(retain) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)connectToSession:(id)arg1;	// IMP=0x0000000000009bae
- (_Bool)shouldAcceptConnection:(id)arg1;	// IMP=0x0000000000009a80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain) id delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

