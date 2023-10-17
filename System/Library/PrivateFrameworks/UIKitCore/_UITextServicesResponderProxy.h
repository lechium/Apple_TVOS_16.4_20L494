//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIResponder.h"

@protocol _UITextServicesResponderProxyDelegate;

__attribute__((visibility("hidden")))
@interface _UITextServicesResponderProxy : UIResponder
{
    UIResponder *_responder;	// 8 = 0x8
    id <_UITextServicesResponderProxyDelegate> _delegate;	// 16 = 0x10
}

+ (id)_proxyWithResponder:(id)arg1;	// IMP=0x0060000000f27e72
- (void).cxx_destruct;	// IMP=0x0000000000f281f2
@property(nonatomic) __weak id <_UITextServicesResponderProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIResponder *responder; // @synthesize responder=_responder;
- (void)_translate:(id)arg1;	// IMP=0x0000000000f28135
- (void)_lookup:(id)arg1;	// IMP=0x0000000000f280be
- (void)_define:(id)arg1;	// IMP=0x0000000000f28047
- (void)_addShortcut:(id)arg1;	// IMP=0x0000000000f27fd0
- (void)_share:(id)arg1;	// IMP=0x0000000000f27f59
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000f27edc
- (id)nextResponder;	// IMP=0x0000000000f27ec3

@end
