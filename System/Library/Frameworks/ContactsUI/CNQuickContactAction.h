//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNQuickAction.h"

@class CNContactAction, NSString;
@protocol CNQuickContactActionDelegate;

__attribute__((visibility("hidden")))
@interface CNQuickContactAction : CNQuickAction
{
    CNContactAction *_contactAction;	// 96 = 0x60
    id <CNQuickContactActionDelegate> _delegate;	// 104 = 0x68
    CDUnknownBlockType _completionBlock;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000191ca
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak id <CNQuickContactActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContactAction *contactAction; // @synthesize contactAction=_contactAction;
- (void)actionWasCanceled:(id)arg1;	// IMP=0x00000000000190b2
- (void)actionDidFinish:(id)arg1;	// IMP=0x0000000000018fdb
- (id)storeForAction:(id)arg1;	// IMP=0x0000000000018fd3
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000018fcd
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000018fc7
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000018fab
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000018eef
- (void)actionDidUpdate:(id)arg1;	// IMP=0x0000000000018e52
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018d60
- (id)initWithContactAction:(id)arg1;	// IMP=0x0000000000018cde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

