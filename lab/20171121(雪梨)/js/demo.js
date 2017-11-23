function init(){
	var show=document.getElementById("show");
	var arr=new Array(4);
	var i;
	for(i=0;i<arr.length;i++){
		arr[i]=document.getElementById(i+1);
	}
	show.appendChild(arr[0]);
	console.log(arr[0]);

	var more=document.getElementsByTagName("ul")[0].children;
	
	for(i=0;i<more.length;i++){
		more[i].onmouseover=function(){
			var k=this.className;
			var j;
			var li=document.getElementsByTagName("ul")[0].children;
			var child=show.childNodes[0];
			var newchild=arr[k-1];
			if(newchild!=child){
				newchild.className="display";
				child.className="display-none";

				show.replaceChild(newchild,child);
				for(j=0;j<li.length;j++)
					li[j].firstChild.className='none';
				this.firstChild.className='liactive';
			}
		}
	}

	var block=document.getElementsByClassName('block-tag');
	var comment=document.getElementsByClassName('comment')[0];
	console.log(block);
	for(i=0;i<block.length;i++){
		block[i].onmouseover=function(){
			this.children[5].className='commentshow';	
		}
		block[i].onmouseout=function(){
			this.children[5].className='comment';	
		}
	}
}
