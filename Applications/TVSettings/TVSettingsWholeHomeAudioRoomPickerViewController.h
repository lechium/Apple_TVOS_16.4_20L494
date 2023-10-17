//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TVSettingsWholeHomeAudioRoomDataSource;
@protocol TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate;

@interface TVSettingsWholeHomeAudioRoomPickerViewController : TSKViewController
{
    id <TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    TVSettingsWholeHomeAudioRoomDataSource *_dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000e189
@property(readonly, nonatomic) TVSettingsWholeHomeAudioRoomDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x001000000000de7d
- (void)_presentCreateRoomFailedViewControllerWithError:(id)arg1;	// IMP=0x001000000000dd47
- (void)_showAccessoryRemoveFailed;	// IMP=0x001000000000db72
- (void)__removeLocalAccessoryFromHome;	// IMP=0x001000000000d91b
- (void)_removeLocalAccessoryFromHome;	// IMP=0x001000000000d8b1
- (void)__moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x001000000000d315
- (void)_moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x001000000000d0ef
- (void)__moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x001000000000cef0
- (void)_moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x001000000000ccca
- (void)_didSelectSuggestedRoomItem:(id)arg1;	// IMP=0x001000000000cb19
- (void)_didSelectExistingRoomItem:(id)arg1;	// IMP=0x001000000000c95e
- (id)_makeAddNewRoomViewController;	// IMP=0x001000000000c8b0
- (void)wholeHomeAudioRoomDataSourceDidUpdate:(id)arg1;	// IMP=0x001000000000c89e
- (void)wholeHomeAudioRoomDataSourceHomeWasRemoved:(id)arg1;	// IMP=0x001000000000c7d3
- (id)loadSettingGroups;	// IMP=0x001000000000bbc8
- (id)initWithHome:(id)arg1;	// IMP=0x001000000000bae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
