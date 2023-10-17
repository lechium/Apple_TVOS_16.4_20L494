//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMHeartRate
{
    struct unique_ptr<CLCatherineNotifier_Type::Client, std::default_delete<CLCatherineNotifier_Type::Client>> _heartRateObserverClient;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    _Bool _disableForceActiveListeners;	// 48 = 0x30
    int _sampleCount;	// 52 = 0x34
}

- (id).cxx_construct;	// IMP=0x0020000000c111b2
- (void).cxx_destruct;	// IMP=0x0010000000c1116f
- (int)getSampleCount;	// IMP=0x0010000000c1115f
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000000c1114b
- (void)onHeartRateNotification:(const int *)arg1 data:(const NotificationData_f96d9675 *)arg2;	// IMP=0x0010000000c10fce
- (void)teardownListeners;	// IMP=0x0010000000c10fa6
- (void)setupListener;	// IMP=0x0010000000c10cb6
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x0010000000c10c3d

@end

