//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPerlinNoiseSource;

__attribute__((visibility("hidden")))
@interface GKTurbulenceNoiseModifier
{
    double _power;	// 16 = 0x10
    double _frequency;	// 24 = 0x18
    double _roughness;	// 32 = 0x20
    int _seed;	// 40 = 0x28
    GKPerlinNoiseSource *_perlin[3];	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000039f6e
- (id)cloneModule;	// IMP=0x0000000000039f0d
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000039d3c
- (int)requiredInputModuleCount;	// IMP=0x0000000000039d31
- (void)dealloc;	// IMP=0x0000000000039cc9
- (id)initWithFrequency:(double)arg1 power:(double)arg2 roughness:(double)arg3 seed:(int)arg4;	// IMP=0x0000000000039bd7
- (id)initWithInputModuleCount:(unsigned long long)arg1;	// IMP=0x0000000000039bb4
- (id)init;	// IMP=0x0000000000039b91

@end

