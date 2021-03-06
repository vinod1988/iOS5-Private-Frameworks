/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSDate, NSTimer;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSDate *_lastLocationTimeStamp;
    float _lastLocationAccuracy;
    id <CLLocationManagerDelegate> _delegate;
    BOOL _isTrackingLocationEnabled;
    NSTimer *_nonSLCLocationUpdateTimer;
    NSTimer *_accuracyFallbackTimer;
    int _authorizationStatus;
    double _oldestAcceptedTime;
    double _lastLocationUpdateTime;
    double _nextPlannedUpdate;
    BOOL _isTrackingLocation;
}

+ (id)sharedWeatherLocationManager;
- (void)_clearLastLocUpdateTime;
- (void)forceLocationUpdate;
- (void)setLocationTrackingEnabled:(BOOL)arg1;
- (BOOL)loadAndPrepareLocationTrackingState;
- (void)_setUpLocationTimerWithInterval:(float)arg1;
- (void)setLocationTrackingActive:(BOOL)arg1;
- (int)forceLoadingAuthorizationStatus;
- (void)_updateLocation:(id)arg1;
- (BOOL)isLocalStaleOrOutOfDate;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)_cleanupAccuracyFallbackTimer;
- (void)_cleanupLocationTimer;
- (void)updateLocation:(id)arg1;
- (double)_nextPlannedUpdate;
- (double)_lastLocationUpdateTime;
@property(nonatomic) BOOL isTrackingLocation; // @synthesize isTrackingLocation=_isTrackingLocation;
@property(nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) BOOL isTrackingLocationEnabled; // @synthesize isTrackingLocationEnabled=_isTrackingLocationEnabled;
@property(nonatomic) id <CLLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float lastLocationAccuracy; // @synthesize lastLocationAccuracy=_lastLocationAccuracy;
@property(copy, nonatomic) NSDate *lastLocationTimeStamp; // @synthesize lastLocationTimeStamp=_lastLocationTimeStamp;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;

@end

