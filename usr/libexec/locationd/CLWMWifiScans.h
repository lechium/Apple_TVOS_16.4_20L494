//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMWifiScans
{
    shared_ptr_da0ccc6f _writer;	// 8 = 0x8
    id <CLWorkoutRecordingDelegate> _delegate;	// 24 = 0x18
    id <CLIntersiloUniverse> _universe;	// 32 = 0x20
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiClient;	// 40 = 0x28
    NSMutableArray *_wifiLookupTable;	// 48 = 0x30
    _Bool _disableWifiScans;	// 56 = 0x38
    int _sampleCount;	// 60 = 0x3c
}

- (id).cxx_construct;	// IMP=0x0020000000c118a4
- (void).cxx_destruct;	// IMP=0x0010000000c11868
- (int)getSampleCount;	// IMP=0x0010000000c11858
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000000c11844
- (void)onWifiScanNotification:(const int *)arg1 data:(const void *)arg2;	// IMP=0x0010000000c113d8
- (void)removeAllObjects;	// IMP=0x0010000000c113bb
- (void)dealloc;	// IMP=0x0010000000c1136d
- (void)teardownListeners;	// IMP=0x0010000000c11345
- (void)setupListener;	// IMP=0x0010000000c11292
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x0010000000c111f8

@end
