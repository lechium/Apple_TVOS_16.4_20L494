//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class NSTimer, _UIStatusBarVPNDisconnectView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVPNDisconnectItem : _UIStatusBarItem
{
    _UIStatusBarVPNDisconnectView *_disconnectView;	// 8 = 0x8
    NSTimer *_slashBeginTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000dcb64a
@property(retain, nonatomic) NSTimer *slashBeginTimer; // @synthesize slashBeginTimer=_slashBeginTimer;
@property(retain, nonatomic) _UIStatusBarVPNDisconnectView *disconnectView; // @synthesize disconnectView=_disconnectView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000dcb4da
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000dcb4c8
- (void)_create_disconnectView;	// IMP=0x0000000000dcb46e
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x0000000000dcb3dd
- (id)dependentEntryKeys;	// IMP=0x0000000000dcb3ba

@end

