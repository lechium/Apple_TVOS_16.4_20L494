//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, NSArray, NSMapTable, NSString;
@protocol AVUnifiedPlayerObservingMenuProviderDelegate;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerObservingMenuProvider : NSObject
{
    id <AVUnifiedPlayerObservingMenuProviderDelegate> _delegate;	// 8 = 0x8
    NSArray *_inputMenuElements;	// 16 = 0x10
    AVObservationController *_observationController;	// 24 = 0x18
    NSMapTable *_observationTokensByMenuElement;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012f602
@property(readonly, nonatomic) NSMapTable *observationTokensByMenuElement; // @synthesize observationTokensByMenuElement=_observationTokensByMenuElement;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(copy, nonatomic) NSArray *inputMenuElements; // @synthesize inputMenuElements=_inputMenuElements;
@property(nonatomic) __weak id <AVUnifiedPlayerObservingMenuProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateOfChanges;	// IMP=0x000000000012f587
- (void)_handleChange:(id)arg1 forMenuElement:(id)arg2;	// IMP=0x000000000012f575
- (void)_startObservingMenuElements:(id)arg1;	// IMP=0x000000000012f2d1
- (void)_stopObservingMenuElements:(id)arg1;	// IMP=0x000000000012f0e4
- (void)prepareForDisplay;	// IMP=0x000000000012efa3
@property(readonly, nonatomic) NSArray *menuElements;
- (void)dealloc;	// IMP=0x000000000012ef53
- (id)init;	// IMP=0x000000000012ee92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

