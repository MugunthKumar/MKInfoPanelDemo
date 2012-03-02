//
//  MKInfoPanelDemoViewController.m
//  MKInfoPanelDemo
//
//  Created by Mugunth on 25/04/11.
//  Copyright 2011 Steinlogic. All rights reserved.

#import "MKInfoPanelDemoViewController.h"
#import "MKInfoPanel.h"

@implementation MKInfoPanelDemoViewController

- (void)dealloc
{
    [super dealloc];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
    [super viewDidLoad];
}
*/

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

-(IBAction) button1Tapped:(id) sender
{
    [MKInfoPanel showPanelInView:self.view 
                            type:MKInfoPanelTypeInfo 
                           title:@"Tweet Posted!" 
                        subtitle:nil 
                       hideAfter:2];
}

-(IBAction) button2Tapped:(id) sender
{
    [MKInfoPanel showPanelInView:self.view 
                            type:MKInfoPanelTypeInfo 
                           title:@"Tweet Posted!" 
                        subtitle:@"Arigatou!" 
                       hideAfter:2];
}

-(IBAction) button3Tapped:(id) sender
{
    [MKInfoPanel showPanelInView:self.view 
                            type:MKInfoPanelTypeError
                           title:@"Network Failure!" 
                        subtitle:nil 
                       hideAfter:2];
}

-(IBAction) button4Tapped:(id) sender
{
    [MKInfoPanel showPanelInView:self.view 
                            type:MKInfoPanelTypeError 
                           title:@"Network Failure!" 
                        subtitle:@"Check your internet connection and try again later!" 
                       hideAfter:2];
}


@end
