//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SDNetworkOperation;
@protocol SDAirDropListenerDelegate;

@interface SDAirDropListener : NSObject
{
    SDNetworkOperation *_listener;	// 8 = 0x8
    _Bool _contactsOnly;	// 16 = 0x10
    id <SDAirDropListenerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008a747
@property __weak id <SDAirDropListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool contactsOnly; // @synthesize contactsOnly=_contactsOnly;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000008a656
- (void)stop;	// IMP=0x001000000008a607
- (void)start;	// IMP=0x001000000008a594
- (void)networkOperation:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x001000000008a252
- (id)init;	// IMP=0x001000000008a204

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

