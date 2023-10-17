//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SDBonjourBrowser;
@protocol SDWindowsBrowserDelegate;

@interface SDWindowsBrowser : NSObject
{
    SDBonjourBrowser *_browser;	// 8 = 0x8
    NSString *_workgroup;	// 16 = 0x10
    id <SDWindowsBrowserDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001080a4
@property __weak id <SDWindowsBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *workgroup; // @synthesize workgroup=_workgroup;
- (void)stop;	// IMP=0x001000000010801a
- (void)start;	// IMP=0x0010000000107f33
- (void)bonjourNodesDidChange:(id)arg1;	// IMP=0x0010000000107efd
@property(readonly, copy) NSArray *nodes;
- (void)dealloc;	// IMP=0x0010000000107ea9
- (id)initWithWorkgroup:(id)arg1;	// IMP=0x0010000000107e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
