//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PBAppInfoController, PBAppSwitcherItem;
@protocol PBAppSwitcherDataSourceDelegate;

@interface PBAppSwitcherDataSource : NSObject
{
    id <PBAppSwitcherDataSourceDelegate> _delegate;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    PBAppSwitcherItem *_kioskItem;	// 24 = 0x18
    PBAppSwitcherItem *_focusedProcessItem;	// 32 = 0x20
    NSArray *_pendingUpdates;	// 40 = 0x28
    NSMutableArray *_itemsIncludingUpdates;	// 48 = 0x30
    PBAppInfoController *_appInfoController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000df029
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, copy, nonatomic) NSMutableArray *itemsIncludingUpdates; // @synthesize itemsIncludingUpdates=_itemsIncludingUpdates;
@property(readonly, copy, nonatomic) NSArray *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(readonly, nonatomic) PBAppSwitcherItem *focusedProcessItem; // @synthesize focusedProcessItem=_focusedProcessItem;
@property(readonly, nonatomic) PBAppSwitcherItem *kioskItem; // @synthesize kioskItem=_kioskItem;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <PBAppSwitcherDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appTransitioner:(id)arg1 didCompleteAppTransition:(id)arg2;	// IMP=0x00100000000dec9a
- (void)_recalculateUpdates:(_Bool)arg1;	// IMP=0x00100000000de8e2
- (void)_updateWithRemovedItems:(id)arg1;	// IMP=0x00100000000de798
- (void)_populateItems:(id)arg1;	// IMP=0x00100000000de37f
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000000ddb52
- (void)applyPendingUpdates;	// IMP=0x00100000000dd875
- (id)indexPathForItem:(id)arg1;	// IMP=0x00100000000dd822
- (void)handleKillRequestForItem:(id)arg1;	// IMP=0x00100000000dd71c
- (void)handleLaunchRequestForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dd346
- (void)handleActivationRequestForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dd214
- (_Bool)canKillItem:(id)arg1;	// IMP=0x00100000000dd16e
- (_Bool)canSwitchToItem:(id)arg1;	// IMP=0x00100000000dd0ca
- (void)dealloc;	// IMP=0x00100000000dd055
- (id)initWithFocusedProcessBundleID:(id)arg1;	// IMP=0x00100000000dcf1f
- (id)init;	// IMP=0x00100000000dcf11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

