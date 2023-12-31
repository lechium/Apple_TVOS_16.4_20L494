//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewController.h"

@class NSArray, NSMutableDictionary, _UIDictionaryManager;

__attribute__((visibility("hidden")))
@interface _UIRemoteDictionaryViewController : UITableViewController
{
    NSArray *_availableDictionaries;	// 424 = 0x1a8
    _UIDictionaryManager *_dictionaryAssetManager;	// 432 = 0x1b0
    NSMutableDictionary *_downloadingAssets;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x000000000044b083
@property(retain, nonatomic) NSMutableDictionary *downloadingAssets; // @synthesize downloadingAssets=_downloadingAssets;
@property(retain, nonatomic) _UIDictionaryManager *dictionaryAssetManager; // @synthesize dictionaryAssetManager=_dictionaryAssetManager;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000000044afd7
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000044ac4f
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000044ac47
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000044a293
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000044a276
- (void)_startDownloadForDictionary:(id)arg1;	// IMP=0x0000000000449df2
- (void)_handleDownloadButton:(id)arg1;	// IMP=0x0000000000449c7f
- (id)_downloadButton;	// IMP=0x0000000000449ae5
- (void)viewDidLoad;	// IMP=0x00000000004498f6
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000044984d

@end

