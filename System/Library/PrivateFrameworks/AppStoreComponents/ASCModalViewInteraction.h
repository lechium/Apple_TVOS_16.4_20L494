//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCModalViewGestureRecognizer, NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface ASCModalViewInteraction : NSObject
{
    UIView *_view;	// 8 = 0x8
    ASCModalViewGestureRecognizer *_cancelGestureRecognizer;	// 16 = 0x10
    CDUnknownBlockType _cancelBlock;	// 24 = 0x18
    NSMutableArray *_observers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000032fc8
@property(readonly, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) ASCModalViewGestureRecognizer *cancelGestureRecognizer; // @synthesize cancelGestureRecognizer=_cancelGestureRecognizer;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)cancelGestureDidChange:(id)arg1;	// IMP=0x0000000000032ecb
- (void)invalidate;	// IMP=0x0000000000032c1b
- (void)installWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003273d
- (void)dealloc;	// IMP=0x00000000000326ff
- (id)initWithView:(id)arg1;	// IMP=0x0000000000032681

@end

