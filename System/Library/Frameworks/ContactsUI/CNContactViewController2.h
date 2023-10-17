//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNContactPropertyModel, CNContactViewHostViewController, NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface CNContactViewController2 : UIViewController
{
    _Bool _ignoreViewWillBePresented;	// 8 = 0x8
    CNContactViewHostViewController *_remoteHostViewController;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    CNContactPropertyModel *_model;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002d1cb
@property(retain) CNContactPropertyModel *model; // @synthesize model=_model;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CNContactViewHostViewController *remoteHostViewController; // @synthesize remoteHostViewController=_remoteHostViewController;
- (void)_prepareViewController;	// IMP=0x000000000002cef9
- (void)_setupViewController;	// IMP=0x000000000002c951
- (void)cancel:(id)arg1;	// IMP=0x000000000002c7e1
- (void)updatedTransactions:(id)arg1;	// IMP=0x000000000002c76f
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c538
- (_Bool)outOfProcess;	// IMP=0x000000000002c4be
- (void)pendingRemoteTransactions:(id)arg1;	// IMP=0x000000000002c4b8
- (void)pendingTransactions;	// IMP=0x000000000002bf8f
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000002bbcf
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002b9f5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002b9a2
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000002b95e
@property(retain, nonatomic) NSArray *displayedProperties;
@property(retain, nonatomic) id displayedObject;
- (void)_endDelayingPresentation;	// IMP=0x000000000002b794
- (_Bool)_isDelayingPresentation;	// IMP=0x000000000002b707
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002b6bf
- (void)loadView;	// IMP=0x000000000002b34e
- (id)init;	// IMP=0x000000000002b12f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

