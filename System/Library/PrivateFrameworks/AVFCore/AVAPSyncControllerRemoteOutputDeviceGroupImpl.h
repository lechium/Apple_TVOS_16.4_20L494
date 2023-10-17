//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDevice, AVOutputDeviceGroup, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVAPSyncControllerRemoteOutputDeviceGroupImpl : NSObject
{
    AVOutputDeviceGroup *_parentOutputDeviceGroup;	// 8 = 0x8
    struct OpaqueAPSyncController *_syncController;	// 16 = 0x10
    struct __CFString *_groupID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000154ed4
@property __weak AVOutputDeviceGroup *parentOutputDeviceGroup; // @synthesize parentOutputDeviceGroup=_parentOutputDeviceGroup;
- (void)_volumeControlTypeChangedForGroupWithID:(struct __CFString *)arg1;	// IMP=0x0000000000154e61
- (long long)volumeControlType;	// IMP=0x0000000000154db7
- (void)setVolume:(float)arg1;	// IMP=0x0000000000154d5a
- (void)_volumeChangedForGroupWithID:(struct __CFString *)arg1;	// IMP=0x0000000000154d06
@property(readonly) float volume;
- (void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000154b7c
- (void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000015483c
@property(readonly) AVOutputDevice *groupLeader;
- (void)_groupMembersChangedForGroupWithID:(struct __CFString *)arg1;	// IMP=0x0000000000154779
- (id)_outputDeviceForID:(struct __CFString *)arg1;	// IMP=0x0000000000154771
- (id)_outputDevicesFromProperty:(struct __CFString *)arg1 withQualifier:(struct __CFString *)arg2;	// IMP=0x0000000000154699
@property(readonly) NSArray *outputDevices;
@property(readonly) _Bool receivesLongFormAudioFromLocalDevice;
- (void)dealloc;	// IMP=0x0000000000154588
- (id)initWithRemoteGroupID:(struct __CFString *)arg1 syncController:(struct OpaqueAPSyncController *)arg2;	// IMP=0x00000000001540ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
