//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCPhysicalInputElementCollection, NSString, _GCDevicePhysicalInputBase;
@protocol GCDevice;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputFacade
{
    _GCDevicePhysicalInputBase *_impl;	// 8 = 0x8
}

- (id)changedElements;	// IMP=0x000000000003b069
- (long long)changeForElement:(id)arg1;	// IMP=0x000000000003afac
- (id)nextInputState;	// IMP=0x000000000003af43
@property long long inputStateQueueDepth;
@property(copy) CDUnknownBlockType inputStateAvailableHandler;
- (id)capture;	// IMP=0x000000000003ad93
@property(copy) CDUnknownBlockType elementValueDidChangeHandler;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000003acd8
@property(readonly) GCPhysicalInputElementCollection *dpads;
@property(readonly) GCPhysicalInputElementCollection *switches;
@property(readonly) GCPhysicalInputElementCollection *axes;
@property(readonly) GCPhysicalInputElementCollection *buttons;
@property(readonly) GCPhysicalInputElementCollection *elements;
@property(readonly) double lastEventLatency;
@property(readonly) double lastEventTimestamp;
@property(readonly) __weak id <GCDevice> device;
- (id)init;	// IMP=0x000000000003ab44
- (id)initWith:(id)arg1 context:(id)arg2;	// IMP=0x000000000003aae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

