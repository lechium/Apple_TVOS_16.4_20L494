//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject
{
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> m_core;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000000ed260
- (void).cxx_destruct;	// IMP=0x00000000000ed230
- (id)lastOrientation;	// IMP=0x00000000000ed170
- (void)stopUpdating;	// IMP=0x00000000000ed160
- (void)startUpdating;	// IMP=0x00000000000ed150
- (void)setController:(struct DeviceOrientationController *)arg1;	// IMP=0x00000000000ed130
- (void)setOrientation:(id)arg1;	// IMP=0x00000000000ed090
- (id)init;	// IMP=0x00000000000ed010

@end

