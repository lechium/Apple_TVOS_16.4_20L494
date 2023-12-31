//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperation, NSString;
@protocol LSOpenResourceOperationDelegate;

__attribute__((visibility("hidden")))
@interface _LSOpenResourceOperationDelegateWrapper : NSObject
{
    NSOperation *_operation;	// 8 = 0x8
    id <LSOpenResourceOperationDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ede9b
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000edda0
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x00000000000edd12
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;	// IMP=0x00000000000edc52
- (id)initWithOperation:(id)arg1 wrappedDelegate:(id)arg2;	// IMP=0x00000000000edba2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

