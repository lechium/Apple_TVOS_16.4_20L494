//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TVCSHome;
@protocol TVSettingsWholeHomeAudioRoomDataSourceDelegate;

@interface TVSettingsWholeHomeAudioRoomDataSource : NSObject
{
    TVCSHome *_home;	// 8 = 0x8
    NSArray *_existingRooms;	// 16 = 0x10
    NSArray *_suggestedRoomNames;	// 24 = 0x18
    id <TVSettingsWholeHomeAudioRoomDataSourceDelegate> _delegate;	// 32 = 0x20
}

+ (id)new;	// IMP=0x00400000000dd210
- (void).cxx_destruct;	// IMP=0x00200000000dd9b9
@property(nonatomic) __weak id <TVSettingsWholeHomeAudioRoomDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *suggestedRoomNames; // @synthesize suggestedRoomNames=_suggestedRoomNames;
@property(retain, nonatomic) NSArray *existingRooms; // @synthesize existingRooms=_existingRooms;
@property(retain, nonatomic) TVCSHome *home; // @synthesize home=_home;
- (void)_update;	// IMP=0x00100000000dd711
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000dd6be
@property(readonly, nonatomic) _Bool canBeRemovedFromHome;
- (void)dealloc;	// IMP=0x00100000000dd33d
- (id)initWithHome:(id)arg1;	// IMP=0x00100000000dd253
- (id)init;	// IMP=0x00100000000dd228

@end

