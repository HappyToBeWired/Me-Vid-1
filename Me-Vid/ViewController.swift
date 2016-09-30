//
//  ViewController.swift
//  Me-Vid
//
//  Created by Alex Gallacher on 29/09/2016.
//  Copyright © 2016 Alex Gallacher. All rights reserved.
//

import UIKit

class ViewController: AAPLCameraViewController {

    @IBOutlet weak var previewView: AAPLPreviewView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        _previewView = previewView
       
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

