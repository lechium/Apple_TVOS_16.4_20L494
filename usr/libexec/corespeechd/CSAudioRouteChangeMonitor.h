//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAudioRouteChangeMonitor
{
}

+ (id)sharedInstance;	// IMP=0x00400000000dd32a
- (_Bool)jarvisConnected;	// IMP=0x00400000000dd4e7
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dd4bb
- (_Bool)siriInputSourceOutOfBand;	// IMP=0x00100000000dd498
- (void)getSiriInputSourceOutOfBand:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dd46c
- (_Bool)hearstRouted;	// IMP=0x00100000000dd449
- (void)getHearstRouted:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dd41d
- (_Bool)hearstConnected;	// IMP=0x00100000000dd3fa
- (void)getHearstConnected:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dd3ce
- (void)_stopMonitoring;	// IMP=0x00100000000dd3ab
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000dd37f

@end

