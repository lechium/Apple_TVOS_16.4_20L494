//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HAL_DSP_HostCallbacks;

__attribute__((visibility("hidden")))
@interface DSP_HALBypass_IOProcessor : NSObject
{
    void *_dspCallbacks;	// 8 = 0x8
    id <HAL_DSP_HostCallbacks> _hostCallbacks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000034893
@property(retain, nonatomic) id <HAL_DSP_HostCallbacks> hostCallbacks; // @synthesize hostCallbacks=_hostCallbacks;
@property(nonatomic) void *dspCallbacks; // @synthesize dspCallbacks=_dspCallbacks;
- (id)getCustomProperty:(struct AudioObjectPropertyAddress)arg1;	// IMP=0x000000000003485c
- (_Bool)setCustomProperty:(struct AudioObjectPropertyAddress)arg1 withData:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000034854
- (_Bool)hasCustomProperty:(struct AudioObjectPropertyAddress)arg1;	// IMP=0x000000000003484c
- (id)getCustomPropertyList;	// IMP=0x0000000000034844
- (id)adaptToConfigurationChange:(id)arg1 withCallbacks:(void *)arg2 error:(id *)arg3;	// IMP=0x0000000000034512
- (id)negotiateConfigurationChange:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000344f9
- (id)retrieveFormats:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000344e0
- (void)dealloc;	// IMP=0x0000000000034486
- (id)init;	// IMP=0x0000000000034439

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
